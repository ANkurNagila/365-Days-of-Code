class Solution {
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

int decimalToBinary(int N)
{
 
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
 
        cnt++;
    }
 
    return B_Number;
}
    
public:
    string addBinary(string a, string b) {
        
        int x=stoi(a);
        int y=stoi(b);
        
        x=binaryToDecimal(x);
        y=binaryToDecimal(y);
        
        int ans=x+y;
        
        ans=decimalToBinary(ans);
        
        string final_ans=to_string(ans);
        
        return final_ans;
        
        
    }
};
