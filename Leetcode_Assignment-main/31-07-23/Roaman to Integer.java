
class Solution {
    public int romanToInt(String s) {
     
        int current = 0;
        int ans = 0;
        int previous = 0;
        //Read from Right to Left
        for (int i = s.length() - 1; i >= 0; i--) {
            switch(s.charAt(i)){
                case 'I':
                    current = 1;
                    break;
                case 'V':
                    current = 5;
                    break;
                case 'X':
                    current = 10;
                    break;  
                case 'L':
                    current = 50;
                    break;
                case 'C':
                    current = 100;
                    break;
                case 'D':
                    current = 500;
                    break;
                case 'M':
                    current = 1000;
                    break;
            }
            System.out.println(previous+"  "+current);
            // Here is the condition
            if ( previous > current) {
                ans -= current;
            }else{
                ans += current;
                previous = current;
            }
           
        }
        return ans;
    }
    
}