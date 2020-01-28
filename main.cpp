#include <iostream>
#include <string>

using namespace std;

bool dotInString(string str) {
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '.') {
            return true;          
        }
    }
    return false;
}

int main()
{
    short N, M;
    
    cin >> N >> M;
    
    string files[N][2];
    string TM = "NONE";
    
    string DOT = ".";
    
    size_t pos = 0;
    string word;
    string part1;
    string part2;
    
    int user = 1;
    
    bool same = true;
    
    
    
    // Вбиваем
    for(int i = 0; i < N; i++) {
        cin >> word;
        
        if(dotInString(word)) {
            while ((pos = word.find(DOT)) != string::npos) {
                part1 = word.substr(0, pos);
                part2 = word.substr(pos, word.length()-1);
                files[i][0] = part1;
                files[i][1] = part2;
                word.erase(0, pos + DOT.length());
            }
        } else {
            files[i][0] = word;
            files[i][1] = ""; 
        }
    }
    
    // Решаем
    // Выполняем столько, сколько раз сказали
    for(int repeat = 0; repeat < M; repeat++) {
        
        // Парсим все файлы 
        for(int i = 0; i < N; i++) {
            if(files[i][0] != "pass" && files[i][user] != "" && files[i][user] != ".") {
                same = false;
                TM = files[i][user];
                files[i][user] = "NONE";
                
                // Проверка на наличие еще одного элемента
                for(int j = 0; j < N; j++) {
                    if(files[j][0] != "pass" && files[j][user] != "." && files[j][user] != "" && files[j][user] != "NONE" && TM == files[j][user] ) {
                        same = true;
                    }
                }
                
                files[i][user] = TM;
                //cout << user << ":" << files[i][0] << files[i][1] << " KILL HIM! " << endl;
                if(!same) {
                    files[i][0] = "pass";
                    
                }
            }
        }
        
        if(user == 0) user = 1;
        else user = 0;
        
    }
    
    
    // Выводим
    int conditates = 0;
    for(int i = 0; i < N; i++) {
        if(files[i][0] != "pass") {
            conditates++;
        }
    }
    
    cout << conditates << endl;
    for(int i = 0; i < N; i++) { 
        if(files[i][0] != "pass") {
            cout << files[i][0] << files[i][1] << endl; 
        }
    }
    
    
    return 0;
}
