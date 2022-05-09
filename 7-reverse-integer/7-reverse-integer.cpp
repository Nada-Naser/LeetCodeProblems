class Solution {
public:
    int reverse(int x) {
        bool neg=0;
       
       long long y=0;
        while(x!=0)
        {
            y*=10;
            y+=x%10;
            x/=10;
        }
            if(y<INT_MIN||y>INT_MAX)return 0;
            else
                return y;
        
          
        }
        
        
        
    
};