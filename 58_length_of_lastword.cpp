class solution {
public :

   int lengthoflastword(string s) {
     
          int i = s.length() -1 ;

          while (i>=0 && s[i] == ' ') {
                 i--;
          }

          int count = 0;


           while (i>=0 && s[i] ! =' ') {
                  count++;
                  i++;
           }


           return count;

      }

};
