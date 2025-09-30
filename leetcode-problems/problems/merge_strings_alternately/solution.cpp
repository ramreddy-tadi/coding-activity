class Solution {
public:
    string mergeAlternately(string S1, string S2) {
    string st = "";
    int a = S1.size();
    int b = S2.size();
    int c = a<b?a:b;
    int i=0;
    while(i<c)
    {
        st+=S1[i];
        st+=S2[i];
        i++;
    }
    while(i<a)
    {
        st+=S1[i];
        i++;
    }
    while(i<b)
    {
        st+=S2[i];
        i++;
    }
    return st;
    }
};