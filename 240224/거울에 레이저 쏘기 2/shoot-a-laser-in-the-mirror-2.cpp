#include <iostream>
#include <vector>

using namespace std;

int dir_code23(int inputLight){
    if(inputLight == 0){
        return 1;
    } else if(inputLight == 1){
        return 0;
    } else if(inputLight == 2){
        return 3;
    } else {
        return 2;
    }
}

int dir_code14(int inputLight){
    if(inputLight == 0){
        return 3;
    } else if(inputLight == 3){
        return 0;
    } else if(inputLight == 1){
        return 2;
    } else {
        return 1;
    }
}

pair<int, int> move(int dir_now){
    if(dir_now == 0){
        return make_pair(1, 0);
    } else if(dir_now == 1){
        return make_pair(0, -1);
    } else if(dir_now == 2){
        return make_pair(-1, 0);
    } else {
        return make_pair(0, 1);
    }
}

bool in_range(int x, int y, int n){
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main(){
    int n;
    cin >> n;

    vector<vector<char>> array(n, vector<char>(n));
    vector<vector<int>> arrayLight(n, vector<int>(n));
    int lightstep = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> array[i][j];
        }
    }

    int inLight;
    cin >> inLight;
    inLight -= 1;

    int start_dir = inLight / n;
    int start_num = inLight % n;

    int x , y;

    if(start_dir == 0){
        x = 0;
        y = start_num;
    } else if(start_dir == 1){
        x = start_num;
        y = n - 1;
    } else if(start_dir == 2){
        x = n - 1;
        y = n - start_num -1;
    } else {
        x = n - start_num -1;
        y = 0;
    }

    int dir_now = start_dir;

    while(true){
        lightstep += 1;
        arrayLight[x][y] = lightstep;

        if(array[x][y] == '/'){
            dir_now = dir_code23(dir_now);
            pair<int, int> p = move(dir_now);
            x += p.first;
            y += p.second;
        } else {
            dir_now = dir_code14(dir_now);
            pair<int, int> p = move(dir_now);
            x += p.first;
            y += p.second;
        }

        if(!in_range(x, y, n)){
            break;
        }
    }

    cout << lightstep;

    return 0;
}