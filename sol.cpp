class Solution {
    public:
        int compress(vector<char>& chars) {
    
    
          int n = chars.size();
    
          int index  = 0;
          int i = 0;
    
          while(i<n){
           int count = 0;
    
           char curr_char = chars[i];
    
           while(i<n && curr_char == chars[i]){
            count++;   // count the total number of the similar charector.
            i++;
    
           }
          
          // here  the work of the assignent;
          chars[index] = curr_char;
          index++;
    
    
          if(count>1){
            string str = to_string(count);
    
            for(char & ch : str){
                chars[index] = ch;
                index++;
            }
          }
          
    
          }
    
         return index;
        }
    };