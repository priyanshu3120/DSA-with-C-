class Solution {
public:
    bool isValid(string word) {
       int n=word.length();
       
       if(n<3) return false;

       bool isVol=false;
       bool isConst=false;

       for(char ch : word)
       {
         if(isalpha(ch))
         {
            ch=tolower(ch);

            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
               isVol=true;
            }
            else
            {
               isConst=true;
            }
         }
         else if(!isdigit(ch))
         {
            return false;
         }   

       }
       return isVol && isConst;
    }
};