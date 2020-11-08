#include <iostream>
#include <numeric>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <cmath>
#include <regex>
#include <array>
#include <sstream>
#include <fileapi.h>
#include <hidsdi.h>


int pairs(std::vector<int>arr);
int solve(std::string s);
std::string highAndLow(const std::string& numbers);
std::string DNAStrand(const std::string& dna);
std::pair<int, int> solve1(int s, int g);
int solve2(std::string s);
std::string doubles(std::string s);

bool solve(std::string a, std::string b){
  std::string a1=a.substr(0,a.find("*"));
  std::string b1=b.substr(0,a.find("*"));
  std::string a2=a.substr(a.find("*")+1);
  std::string b2=b.substr(b.size()-a2.size());
    return a1==b1 && a2==b2;
}

int main() {
    //highAndLow("4 5 29 54 4 0 -214 542 -64 1 -3 6 -6");
    //std::cout<<DNAStrand("AAAA");
   // std::cout<<(solve1(12,5)==std::make_pair(5,7));
    //std::cout<<solve2("gh12cdy695m1");
    std::cout<<doubles("zzzzykkkd");
    HANDLE WINAPI CreateFile{

    };
}

double calcAverage(const std::vector<int>& values){
    return std::accumulate(values.begin(),values.end(),0.0)/values.size();
}

std::string bonus_time(int salary, bool bonus)
{
    return bonus ? "$"+std::to_string(salary*=10):"$"+std::to_string(salary);
}

std::vector<int> invert(std::vector<int> values)
{
    std::transform(values.begin(),values.end(),values.begin(),std::negate<int>());
    return values;
}

std::vector<int> countBy(int x,int n){
    std::vector<int> res;
    for (int i = 1; i <=n ; i++) {
        res.push_back(x*i);
    }
    return res;
}

std::string twoSort(std::vector<std::string> s)
{
std::string result = *min_element(s.begin(),s.end());
    for (int i = 1; i < result.size(); i+=4) {
        result.insert(i,"***");
    }
    return result;
}

bool isPalindrom (const std::string& str)
{
    std::string lstr = str;
    for(char &c:lstr) c=tolower(c);
    return lstr==std::string(lstr.rbegin(),lstr.rend());
}
std::string makeUpperCase (const std::string& input_str)
{
    std::string jk=input_str;
    for(char &c:jk){
        c=toupper(c);
    }
    return jk;
}

std::string removeExclamationMarks(std::string str){
    while (str.find("!")!=-1){
        str.erase(str.find("!"),1);
    }
    return str;
}

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
    return distance_to_pump==mpg*fuel_left? true: false;
}

int count_sheep(std::vector<bool> arr) {
    return count(arr.begin(),arr.end(), true);
}

bool set_alarm(const bool& employed,const bool& vacation){
    return employed&&!vacation ? true:false;
}

std::string integrate(const int& coefficient,const int& exponent){
    return std::to_string(coefficient/(exponent+1))+"x^"+std::to_string(exponent+1);
}

int twice_as_old(int dad, int son) {
    return std::abs(dad-2*son);
}

int sumOfDifferences(const std::vector<int>& arr){
    if(arr.size()<2) return 0;
    std::vector<int> k =arr;
    sort(k.begin(),k.end(),std::greater<int>());
    int g=0;
    for (int i = 0; i <k.size()-1 ; ++i) {
        g+=k[i]-k[i+1];
    }
    return  g;
}

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    int count=0,sum=0;
    for(size_t i=0;i<input.size();i++){
        if (input[i]>0) count++;
        else if(input[i]<0) sum+=input[i];
    }
    return {count,sum};
}

std::string countSheep(int number) {
    std::string k="";
    for(int i=0;i<number;i++){
        k+=std::to_string(i+1)+" sheep...";
    }
    return k;
}

bool hero(int bullets, int dragons) {
    return dragons*2<bullets? true:false;
}

//std::string SubtractSum(int n)
//{
//    int res=0;
//    while (n!=0){
//        res+=n%10;
//        n/10;
//    }
//}

double startingMark(double bodyHeight)
{
    // Remember: Body height of 1.52 m --> starting mark: 9.45 m
    //           Body height of 1.83 m --> starting mark: 10.67 m
    // All other starting marks are based on these guidelines!
    double a= (10.67-9.45)/(1.83-1.52);
    double b=9.45-a*1.52;
    return ((int)(a*bodyHeight + b)*100)/100;
}

double startingMark1(double bodyHeight)
{
    double a= (10.67-9.45)/(1.83-1.52);
    double b=9.45-a*1.52;
    return std::round((bodyHeight*a+b)*100)/100;
}

std::string chromosomeCheck(std::string sperm) {
    return  sperm[1]=='Y' ? "Congratulations! You're going to have a son.":"Congratulations! You're going to have a daughter.";
}

std::string replace(const std::string &s)
{

    return std::regex_replace(s,std::regex("a|e|i|o|u|A|E|I|O|U"),"!");
}

long pillars(int num_of_pillars, int distance, int width) {
    if(num_of_pillars<2) return  0;
    return distance*(num_of_pillars-1)+(num_of_pillars-2)*width;


}
bool feast(std::string beast, std::string dish){
   // return  (*beast.begin()==*dish.rbegin())&&(*beast.end()==*dish.rbegin());
    return beast.front()==dish.front()&&beast.end()==beast.end();
}

class Cube{
 private:int Side;
public:
    int getSide() const {
        return Side;
    }

    void setSide(int side=0) {
        Side = side;
    }
};

std::string DNAtoRNA(std::string dna){
   return std::regex_replace(dna,std::regex("T"),"U");
}

//int grow(std::vector<int> nums) {
//    int k=0;
//    for(auto item:nums){
//        k*=item;
//    }
//}

int findSmallest(std::vector<int> list)
{
    return *min_element(list.begin(),list.end());
}

std::string highAndLow1(const std::string& numbers){
    std::vector<int> result;
    std::string k=numbers;
    k += " ";
    int size = k.size();
    for (int i = 0; i < size; i++)
    {
       size_t pos = k.find(" ", i);
        if (pos < size)
        {
            std::string s = k.substr(i, pos - i);
            result.push_back(std::stoi(s));
            i = pos - 1;
        }
    }
    return std::to_string(*max_element(result.begin(),result.end()))+" "+std::to_string(*min_element(result.begin(),result.end()));
}

int basicOp(char op, int val1, int val2) {
    switch (op) {
        case '+':return val1+val2;
        case '-':return val1-val2;
        case '*':return val1*val2;
        case '/':return val1/val2;
    }
    return 0;
}

int combat(int health, int damage){
    int res = health -damage;
    return res>=0? res:0;
}

std::string correct(std::string str) {
    std::regex_replace(str,std::regex("1"),"I");
    std::regex_replace(str,std::regex("0"),"O");
    std::regex_replace(str,std::regex("5"),"S");
    return str;
}


int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
    return std::abs(a[0]*a[1]*a[2]-b[1]*b[2]*b[3]);
}

bool amIWilson(unsigned n) {
    int res=1;
    while(n>0){
        n-1;
        res*=n;
    }
    double k=(res + 1) / (n * n);
    return (int) k== k ? true: false;
}

int seats_in_theater(int total_col, int total_row, int col, int row) {
    return (total_col-col+1)*(total_row-row);
}

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
    std::string k = arr [0];
    arr[0] = arr[2];
    arr[2] = k;
    return arr;
}

char get_char(int i) {
        return i+48-'0';
}

std::string how_much_i_love_you(int nb_petals) {
    std::array<std::string,6> k = {"not at all","I love you","a little","a lot","passionately","madly"};
    return k[nb_petals%6];
//    switch (nb_petals%6) {
//        case 0:return "not at all";
//        case 1:return "I love you";
//        case :
//    }
}

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
    std::vector<int> k;
    for (auto i:numbers) {
        if(i%divisor==0){
            k.push_back(i);
        }
    }
    return k;
}

bool divide(unsigned weight)
{
   for(int i = 1;i<weight/2;i++){
       if (i&1==0&&(100-i)&1==0){
           return true;
       }
   }
  return false;
}

int pairs(std::vector<int>arr){
    int count=0;
   for(size_t i=0;i<arr.size()-1;i+=2){
       if(abs(arr[i+1]-arr[i])==1) count++;
   }
    return count;
}

std::string highAndLow(const std::string& numbers){
    std::stringstream k(numbers);
    std::vector<int> g;
    int temp;
    while (k>>temp){
        g.push_back(temp);
    }
    auto pair =minmax_element(g.begin(),g.end());
    return std::to_string(*pair.second)+" "+std::to_string(*pair.first);
}

std::string reverse_letter(const std::string &str)
{
    std::string k = str;
    k.erase(std::remove_if(k.begin(), k.end(), (int(*)(int))std::isalnum), str.end());
    
    return ""; //coding and coding..
}

int solve(std::string s){
    int  count = 0;
    int  max =0;
    for (size_t i = 0; i < s.size() ; i++) {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
            count++;
            if(max<count) max = count;
        }else{
            count=0;
        }
    }
    return max;
}

std::string reverse_letter1(const std::string &str)
{
    std::string k = str;
    k.erase(std::remove_if(k.begin(),k.end(),[](char n){ return !isalpha(n);}),k.end());
    //k.erase(std::remove_if(k.begin(),k.end(),&ispunct),k.end());
    //k.erase(std::remove_if(k.begin(),k.end(),&isdigit),k.end());
    return {k.rbegin(),k.rend()};
}

std::vector<int> two_oldest_ages(std::vector<int> ages)
{
//    int age1 = *max_element(ages.begin(),ages.end());
//    ages.erase(std::remove(ages.begin(), ages.end(),age1), ages.end());
//    int
     std::sort(ages.begin(),ages.end(),std::greater<int>());
     return {ages[0],ages[1]};
}


std::string DNAStrand(const std::string& dna)
{
    std::string k="";
    for (int i = 0; i < dna.size(); ++i) {
        if(dna[i]=='T') k+="A";
        if(dna[i]=='A') k+="T";
        if(dna[i]=='C') k+="G";
        if(dna[i]=='G') k+="C";
    }
    return k;
}

std::vector<int> wordValue(std::vector <std::string> arr){
        std::vector<int> k;
        for (auto s:arr) {
            int res = 0;
            int z=1;
            for (auto c:s) {
                if (c==' ') continue;
                res+=c-'a'+1;
            }
            k.push_back(res*z);
        }
        return k;
}

std::pair<int, int> solve1(int s, int g){
    if(s%g==1) return std::make_pair(-1,-1);
    return std::make_pair(g,s-g);
}

int solve2(std::string s){
        int max = 0;
        for (auto c:s) {
            std::string k="";
            if(isdigit(c)){
                k+=c;
            }else{
                k="";
            }
        }
        return max;
}

int solvde3(int a, int b){
    int count=0;
    for(int i = a;i<=b;i++){
        std::string k {std::to_string(i)};

        int num_3 = std::count(k.begin(),k.end(),'3');
        int num_5 = std::count(k.begin(),k.end(),'5');
        int num_8 = std::count(k.begin(),k.end(),'8');

        if(num_3+num_5+num_8==k.length()&&num_8>=num_5&&num_5>=num_3) count++;
    }
    return count;
}

std::string doubles(std::string s){
    std::string k="";
    k.push_back(s[0]);
    for(size_t i=1;i<s.size();i++){
        if (s[i]==k.back()){
            k.pop_back();
            continue;
        }else{
            k.push_back(s[i]);
        }
    }
    return k;
}

std::string solve4(std::string s){
    std::vector<int> k;
    for(size_t i =0 ;i<s.size();i++){
        if(i==' '){
            k.push_back(i);
            s.erase(s.begin()+i);
        }
    }
    std::reverse(s.begin(),s.end());
    for (size_t i = 0; i < k.size(); ++i) {
        s.insert(k[i]," ");
    }
    return s;
}