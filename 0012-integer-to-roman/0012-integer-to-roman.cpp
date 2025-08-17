class Solution {
public:
    string s(int n){
        if(n==1000) return "M";
        if(n==2000) return "MM";
        if(n==3000) return "MMM";
        if(n==500) return "D";
        if(n==400) return "CD";
        if(n==300) return "CCC";
        if(n==200) return "CC";
        if(n==100) return "C";
        if(n==900) return "CM";
        if(n==800) return "DCCC";
        if(n==700) return "DCC";
        if(n==600) return "DC";
        if(n==90) return "XC";
        if(n==80) return "LXXX";
        if(n==70) return "LXX";
        if(n==60) return "LX";
        if(n==50) return "L";
        if(n==40) return "XL";
        if(n==30) return "XXX";
        if(n==20) return "XX";
        if(n==10) return "X";
        if(n==9) return "IX";
        if(n==8) return "VIII";
        if(n==7) return "VII";
        if(n==6) return "VI";
        if(n==5) return "V";
        if(n==4) return "IV";
        if(n==3) return "III";
        if(n==2) return "II";
        if(n==1) return "I";
        return "";
        }
    string intToRoman(int n) {
       int a=n%10;
        n=n/10;
        int b=(n%10)*10;
        n=n/10;
       int c=(n%10)*100;
        n=n/10;
       int d=(n%10)*1000;        
    string sum;
    sum+=s(d);
    sum+=s(c);
    sum+=s(b);
    sum+=s(a);

    return sum;
    }
};