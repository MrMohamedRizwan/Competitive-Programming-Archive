class Solution {
    public String longestCommonPrefix(String[] str) {
        int slen=str[0].length();
        String ans="";
        int l=str.length;
        int f=1;
        int i=0;
        while(i<slen)
        {
            char ch=str[0].charAt(i);
            for(int j=1;j<l;j++)
            {
                if(i>=str[j].length()||ch!=str[j].charAt(i))
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                ans=ans+ch;
            }
            i++;
        }
        return ans;
    }
}