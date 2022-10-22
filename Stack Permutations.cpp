class Solution{
public:
    int isStackPermutation(int n,vector<int> &A,vector<int> &B){
        
       int i=0, j=0;
       stack<int> s;
       while(i<n)
       {
           if(s.empty() || s.top() != B[j])
           {
               s.push(A[i]);
               i++;
           }
           else
           {
               while(!s.empty() && s.top() == B[j])
               {
                   s.pop();
                   j++;
               }
           }
       }
       
       if(j < n)
       {
           while(!s.empty() && s.top() == B[j])
           {
               s.pop();
               j++;
           }
       }
       
        
        if(j == n && s.empty())
        {
            return 1;
        }
        
        return 0;
    }
};
