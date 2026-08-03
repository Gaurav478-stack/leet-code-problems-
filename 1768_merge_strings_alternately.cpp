class solution {
public:
  string mergealternately(string word1,string word2) {
string result ="";
int i=0,j=0;
int n1= word.length(), n2 = word2.lenght();

while (i<n1 && j <n2) {
  result.push_back(word1[i++]);
  result.push_back(word2[j++]);
}
  while (i<n1) {
result.push_back(word1[i++);
}

while (j<n2) {
result.push_back(word2[j++]);
}
 return result;
}

int main() {
string word1.word2;

 word1 ="abc";
 word2 ="pqr";
 cout << "merged: " <<mergealternately(word1,word2) <<endl;

 word1 = "ab";
 word2="pqrs";
 cout << "merged: " <<mergealternately(word1,word2) <<endl;

 word1 ="abcd";
 word2 ="pqr";
 cout << "merged: "<<mergealternately(word1.word2) <<endl;

return 0;
}
};
