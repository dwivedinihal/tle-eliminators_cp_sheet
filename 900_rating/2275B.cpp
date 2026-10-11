#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        // solution
        // agar 1 hai toh uss index k document ko stack mae push krdo
        // agar 2 hai toh and stack empty nhi hai toh top k document ko print krdoand current index ka document skip ho jayega
        // kyuki na toh wo memory mae gya na he aage jaake kabhi print hoga wo, it means wo skip hogya
        // agar 3 hai toh simply jis index pr hai wo print krde.
        // aur hum print wale document ko mantain krenge bs aur end mae jo print nhi hue hai uss sae no printed nikal lenge

        stack<int> st;
        vector<int> printD;
        vector<int> miss;
        for(int i = 0; i < n; i++){
            char c = s[i];

            // agar 1 hai toh push krdo current document ko memory mae 
            if(c == '1'){
                st.push(i+1);
            }
            // agar 2 hai toh memory k document ko print krdo aur current document ko miss krdo
            else if(c == '2'){
                if(!st.empty()){
                    printD.push_back(st.top());
                    st.pop();
                }
                else printD.push_back(i+1);
            }
            // agar 3 hai toh current document ko print krdo, previous wale and memory se koi mtlb nhi 
            else if(c == '3'){
                printD.push_back(i+1);
            }
        }

        sort(printD.begin(), printD.end());
        int itr = 0;
        for(int i = 1; i <= n; i++){
            if(itr < printD.size() && printD[itr] == i){
                itr++;
            }
            else miss.push_back(i);
        }

        cout << miss.size() << endl;
        for(int x : miss) cout << x << " ";
        cout << endl;
    }
}