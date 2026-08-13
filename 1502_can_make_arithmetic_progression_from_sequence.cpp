class solution {
public:
       bool canMakeAritmeticProgression(vector<int>& arr) {
              sort(arr.begin(), arr.end());
          

            int diff =arr[1] - arr[2];

                 for(int i = 2; i < arr.size(); i++) {
                     if (arr[i] - arr[i-1] !=diff) {
                         return false;
                     }
                  }


                return true;

         }
 
     };
