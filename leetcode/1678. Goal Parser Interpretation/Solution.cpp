#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string output;
        for(int i = 0; i < command.size(); i++){
            if(command[i] == 'G'){
                output += 'G';
            }else if(command[i] == '\('){
                if(i <= command.size() - 1 && command[i+1] == '\)'){
                    output += 'o';
                    i++;
                }else if(i <= command.size() - 3 && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == '\)'){
                    output += "al";
                    i += 2;
                }
            }
        }
        return output;
    }
};