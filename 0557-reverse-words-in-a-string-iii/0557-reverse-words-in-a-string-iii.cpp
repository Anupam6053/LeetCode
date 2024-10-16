class Solution {
public:
    void reverse(string & st,int s,int e){
        
        while(s<e){
            swap(st[s],st[e]);
            s++;
            e--;
        }
    }
    string reverseWords(string s) {
        bool pointing=false;
        int start;
        for(int i=0;i<s.size();i++){
            if((!pointing) && s[i] != ' '){
                start=i;
                pointing=true;
            }
            else if(s[i]==' ' && pointing ){
                reverse(s,start,i-1);
                pointing=false;

            }
        }
        if(pointing) reverse(s,start,s.size() - 1);
        return s;
    }
};