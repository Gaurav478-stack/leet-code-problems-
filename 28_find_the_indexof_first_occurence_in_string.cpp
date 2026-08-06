class solution {
public:

   int strStr(string haystack, string needle) {

    int n = haystack.length();
    int m = needle.length();

   for (int i=0 ; i<= n-m ; i++) { int j = o;

    while ( j <m &&  haystack [i+j] == needle [j]) {
 j++; }
 
if (j==m)
return i;
}
return -1;
}
};
