#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin>>q;
    deque<int> d;
    bool rev = false;
    while (q--) {
        string c;
        cin>>c;
        if(c == "toFront"){
            int x;
            cin >> x;
            if(!rev) d.push_front(x);
            else d.push_back(x);
        }
        else if(c == "push_back"){
            int x;
            cin >> x;
            if (!rev) d.push_back(x);
            else d.push_front(x);
        }
        else if(c == "front"){
            if (d.empty()) cout << "No job for Ada?\n";
            else {
                if(!rev){
                    cout << d.front() << "\n";
                    d.pop_front();
                } 
                else{
                    cout << d.back() << "\n";
                    d.pop_back();
                }
            }
        }
        else if(c == "back"){
            if (d.empty()) cout << "No job for Ada?\n";
            else{
                if(!rev){
                    cout << d.back() << "\n";
                    d.pop_back();
                }else {
                    cout << d.front() << "\n";
                    d.pop_front();
                }
            }
        }
        else if(c == "reverse"){
            rev = !rev;
        }
    }
    return 0;
}
 