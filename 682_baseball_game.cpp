class solution {
public:
    int calPoints(vector<string>& operation) {
     vector<int> st;

          for (string op : operation) {
 
              if (op == "c") {
                  st.pop_back();
              }

              else if (op == "D") {
                   st.push_back(st.back() * 2);
              }


              else if (op == "+") {
                    int n =st.size();
                    st.push_back(st[n-1] + st[n-2]);
              }
          
              else {
                   st.push_back(stoi(op));
              }
           }
        
           int ans = 0;

           for (int x : st) {
                ans +=x;
           }

           return ans;
       }

 };
