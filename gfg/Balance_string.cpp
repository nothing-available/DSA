/*
Given an integer N.Create a string using only lowercase characters from a to z that follows the given rules.

When N is even:

Use N/2 characters from the beginning of a-z and N/2 characters from the ending of a-z.

When N is greater than 26,continue repeating the instructions until length of string becomes N.

When N is odd:

Case 1: If the sum of digits of N is even, Select (N+1)/2 characters from the beginning of a-z and (N-1)/2 characters from the ending of a-z.

Case 2: If the sum of digits of N is odd, Select (N-1)/2 characters from the beginning of a-z and (N+1)/2 characters from the ending of a-z.

When N is greater than 26,continue repeating the instructions until length of string becomes N.
*/
class Solution {
  public:
    string BalancedString(int N) {
        string s="abcdefghijklmnopqrstuvwxyz",t;
        int x=N,sum=0,i;
        if(N>26) {
            while(N>26) {t+=s; N-=26;}
        }
        if(N%2==0) {
            for(i=0;i<N/2;i++) t+=s[i];
            for(i=26-N/2;i<26;i++) t+=s[i];
            return t;
        }
        while(x) {sum+=x%10; x/=10;}
        if(sum%2==0) {
            for(i=0;i<=N/2;i++) t+=s[i];
            for(i=26-N/2;i<26;i++) t+=s[i];
        }
        else {
            for(i=0;i<N/2;i++) t+=s[i];
            for(i=25-N/2;i<26;i++) t+=s[i];
        }
        return t;
    }
};
