class Solution {
public:
    bool isValid(string s) {
        stack<char>open;
        for(auto&i:s)
        {
            
            if(i=='{'||i=='('||i=='[')
            {
                open.push(i);
            }
            else
            {
                if(!open.empty())
                {
                    if(i=='}'&&open.top()=='{')
                    {
                        open.pop();
                    }
                    else if(i==')'&&open.top()=='(')
                    {
                        open.pop();
                    }
                    else if(i==']'&&open.top()=='[')
                    {
                        open.pop();
                    }
                    else
                        return false;
                }
                else 
                {
                    return false;
                }
            }
        }
        return open.empty();
        
    }
};