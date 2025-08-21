#include <iostream>
#include <string>
using namespace std;


//brute force ig
// class Solution {
//     public:
//         string mergeAlternately(string word1, string word2) {
//             string result = "";
//             if (word1.length()<word2.length())
//             {
//                 for (int i = 0; i < word1.length(); i++)
//                 {
//                     result += word1[i];
//                     result += word2[i];
//                 }
//                 for (int i = word1.length(); i < word2.length(); i++)
//                 {
//                     result += word2[i];
//                 }
//             }
//             else
//             {
//                 for (int i = 0; i < word2.length(); i++)
//                 {
//                     result += word1[i];
//                     result += word2[i];
//                 }
//                 for (int i = word2.length(); i < word1.length(); i++)
//                 {
//                     result += word1[i];
//                 }
//             }
//             return result;
//         }
//     };

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string result = "";
            int n1 = word1.length();
            int n2 = word2.length();
            int n = min(word1.length(), word2.length());
            for (int i = 0; i < n; i++)
            {
                result += word1[i];
                result += word2[i];
            }
            if (n1<n2)
            {
                result += word2.substr(n1);
            }
            if (n2<n1)
            {
                result += word1.substr(n2);
            }
            return result;
        }
    };