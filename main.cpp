#include <filesystem>
#include <fstream>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>
using Json = nlohmann::json;


Json createJson(const std::filesystem::path &filename){
    std::ifstream file{filename};

    std::string quesiton_contnet;
    std::getline(file, quesiton_contnet);

    std::string line;
    while(std::getline(file, line)){
        // while haven't reacehed the question text
        if(line.length() >= 2 and line[0] == '/' and line[1] == '/') break;

        quesiton_contnet += '\n' + line;
    }

    std::string question = line.substr(4);

    std::vector<std::string> answers;
    int correct_id;
    std::getline(file, line);
    for(int i{}; std::getline(file, line) and line.length() > 2; ++i){
        if(line[0] == '@') correct_id = i;

        answers.push_back(line.substr(2));
    }


    std::getline(file, line);
    std::string explanation = line.substr(4);

    Json options = Json::array();
    for(int i = 0; i < answers.size(); i++){
        options.push_back({
            {"id", i},
            {"option", answers[i]}
        });
    }

    Json answer = Json{
        {"id", correct_id},
        {"explanation", explanation}
    };


    return Json{
        {"question", question},
        {"options", options},
        {"answer", answer},
        {"code", quesiton_contnet}
    };

}


int main(){

    const std::filesystem::path dir = "questions/";
    Json quizzes = Json::array();

    for(auto file : std::filesystem::directory_iterator(dir)){
        auto json = createJson(file);
        quizzes.push_back(json);
    }

    std::ifstream json_file{"questions.json"}; // read the whole json including the 
    Json contnet = Json::parse(json_file);
    contnet["quizzes"] = quizzes; // update only the quizzes portion

    std::ofstream out{"questions.json"};
    out << contnet.dump(4);

}