#include<iostream> 
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rev=0;
        int org=x;
        while(x>0){
            int d=x%10;
            rev=rev*10 + d;
            x/=10;
        }
        return org==rev;
    }
};
int main(){
Solution solution;
int a;
cin>>a;
cout<<boolalpha;
cout<<solution.isPalindrome(a);

    return 0;
}