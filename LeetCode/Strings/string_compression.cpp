//--------------------PROBLEM STATEMENT-----------------------------------------------------------------------
/*
1. You are given a string. 
2. You have to compress the given string in the following two ways - 
   First compression -> The string should be compressed such that consecutive duplicates of characters are replaced with a single character.
   For "aaabbccdee", the compressed string will be "abcde".
   Second compression -> The string should be compressed such that consecutive duplicates of characters are replaced with the character and followed by the number of consecutive duplicates.
   For "aaabbccdee", the compressed string will be "a3b2c2de2".
*/

//---------------------INPUT FORMAT----------------------------------------------------------------------------
//A String

//---------------------OUTPUT FORMAT----------------------------------------------------------------------------
//Two strings representing first compressed string and second compressed string respectively.

//--------------------SOUTION-------------------------------------------------------------------------------------

class Solution {
    
    void convertCountToChar(vector<char>& chars, int count, int& index)
    {
        int power = 1;
        int length = log10(count) + 1;
        int digit = 0;
        while(length)
        {
            power = pow(10, length - 1);
            
            digit = count / power;
            
            count = count % power;
            
            length--;
            
            chars[index++] = '0' + digit;
        }
        
    }
    
public:
    int compress(vector<char>& chars) {
        
        if(chars.size() == 0)
            return 0;
        
        int index = 1;
        int count = 1;
        
        for(int i=1; i<chars.size(); i++)
        {
            if(chars[i] != chars[i-1])
            {
                if(count > 1)
                {
                    convertCountToChar(chars, count, index);
                }
                
                count = 1;
                chars[index++] = chars[i];
                
            }
            else
                count ++;
        }
        
        if(count > 1)
        {
            convertCountToChar(chars, count, index);
        }
        
        return index;
        
    }
};
