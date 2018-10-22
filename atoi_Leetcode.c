class Solution {
public:
    int myAtoi(string str) {
          long res=0;
    int i=0;
    int sign=1;
    while(str[i] == ' ')
        i++;
    if(str[i]=='-' || str[i]=='+')
    {
        if(str[i]=='+')sign=1;
        else sign=-1;
        i++;
    }
        
     while(str[i]>='0' && str[i]<='9')
     {
         res=res*10+(str[i++]-'0');
         if(res*sign>INT_MAX) return INT_MAX;
         if(res*sign<INT_MIN) return INT_MIN;
         
     }
        return res*sign;
        
    }
};
