//
// Created by osleax on 2020/10/13.
//

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

std::string solve4(std::string s);

std::string disemvowel(std::string str);

int solve(std::vector<int>v);

int solve1(std::vector<int> v);

bool solve2(std::string s);

std::string solve5(std::string eq);

std::vector<int> split_by_value(int k, std::vector<int> elements);

int main() {
    std::cout<<solve5("123*b/y");
}

std::string solve4(std::string s){
    std::vector<int> k;
    int g=0;
    for(size_t i =0 ;i<s.size();i++){

        if(s[i]==' '){
            k.push_back(i+g);
            s.erase(s.begin()+i);
            g++;
        }
    }
    std::reverse(s.begin(),s.end());
    for (size_t i = 0; i < k.size(); ++i) {
        s.insert(k[i]," ");
    }
    return s;
}

std::string disemvowel(std::string str)
{
    //正则表达式匹配
    //return std::regex_replace(str,std::regex("[AaEeIiOoUu]"),"");

    //erase+remove
    for(auto letter:"AaEeIiOoUu"){
        str.erase(std::remove(str.begin(),str.end(),letter),str.end());
    }
    return str;
}

int repeats(std::vector<int>v) {
    std::sort(v.begin(),v.end());
    std::vector<int> k;
    k.push_back(v[0]);
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i]==v[i-1]) {
            k.pop_back();
            continue;
        } else{
            k.push_back(v[i]);
        }
    }
    return std::accumulate(k.begin(),k.end(),0);
}

int solve(std::vector<int>v){
for(auto i=v.begin()+1;i!=v.end();i++){
    int k=std::accumulate(v.begin(),i,0);
    int g =std::accumulate(i+1,v.end(),0);
  if(k==g)
      return i-v.begin();
}
    return -1;
}

int solve(std::vector<std::string>v){
    int even=0;
    int odd=0;
    for(auto p:v){
        if (p[0]<97)
            std::stoi(p)&1?odd++:even++;
    }
    return even-odd;
}

int solve1 (std::vector<int> v){
    for(int i:v){
        if(std::find(v.begin(),v.end(),-i)==v.end())
            return i;
    }
    return 0;
}

bool solve2(std::string s){
    if (s==std::string{s.rbegin(),s.rend()})
    {
        if(s.size()&1)return true;
        else return false;
    }else{
        int count=0;
        for (size_t i = 0; i <s.size()/2; ++i) {
            if(s[i]!=s[s.size()-i-1]) count++;
        }
        if (count==1) return true;
    }
    return false;
}

int weekLarsen(int y,int m,int d){
    if(m==1||m==2){
        y--;
        m+=12;
    }
    int w = (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
    return w;
}

//int weekZeller(int y,int m,int d){
//
//}

std::vector <std::string> solve3(int a, int b){
    std::vector<int> m = {1,3,5,7,8,10,12};
    std::vector<std::string> month = {"Jan","Mar","May","Jul","Aug","Oct","Dec"};
    std::vector<std::string> res;
    int count=0;
    for (int i = a; i <=b; i++) {
        int t=0;
        for (auto k:m) {
            int day = weekLarsen(i,k,1);
            if(day==5){
               res.push_back(month[t]);
               count++;
            }
            t++;
        }
    }
    return std::vector<std::string>{res.front(),res.back(),std::to_string(res.size())};
}

std::vector<int> split_by_value(int k, std::vector<int> elements){
    std::vector<int> res1,res2;
    for (auto e:elements) {
        if(e<k) res1.push_back(e);
        else res2.push_back(e);
    }
    res1.insert(res1.end(),res2.begin(),res2.end());
    return res1;
}

std::vector<std::string> number(const std::vector<std::string> &lines)
{
    std::vector<std::string> k;
    for(size_t i=1;i<=lines.size();i++){
        k.emplace_back(std::to_string(i)+": "+lines[i-1]);
    }
    return k;
}

std::string getTurkishNumber(unsigned int n) {
    std::vector<std::string> units{"sıfır","bir","iki","üç","dört","beş","altı","yedi","sekiz","dokuz"};
    std::vector<std::string> tens{"","on","yirmi","otuz","kırk","elli","altmış","yetmiş","seksen","doksan"};
    if (n/10==0) return units[n%10];
    else if (n%10==0) return tens[n/10];
    else return tens[n/10]+" "+units[n%10];
}

int find_short(std::string str)
{
   std::stringstream tmp(str);
    tmp >>str;
   int size = str.size();
   while (tmp >> str)
   {
       if (str.size()<size) size = str.size();
   }
    return size;
}

std::string convertTime(int timeDiff)
{
  int sec = timeDiff%60;
  int min = timeDiff/60%60;
  int hour = timeDiff/60/60%24;
  int day = timeDiff/60/60/24;
    return std::to_string(day)+std::to_string(hour)+std::to_string(min)+std::to_string(sec);
}

std::string solve5(std::string eq){
    for (int i = 0; i < eq.size(); i++)
    {
        if (isdigit(eq[i]) && isdigit(eq[i + 1]))
            std::swap(eq[i], eq[i + 1]);
    }

    reverse(eq.begin(), eq.end());

    return eq;
}

std::string solve(std::string eq) {
    for (size_t i = 0; i < eq.size() - 1; i++) {
        if (isdigit(eq[i]) && isdigit(eq[i + 1]))
            std::swap(eq[i], eq[i + 1]);
    }
    return {eq.rbegin(),eq.rend()};
}

int maxTriSum (std::vector <int> numbers)
{
   std::sort(numbers.begin(),numbers.end(),std::greater<int>());
   numbers.erase(std::unique(numbers.begin(),numbers.end()),numbers.end());
   return numbers[0]+numbers[1]+numbers[2];
}