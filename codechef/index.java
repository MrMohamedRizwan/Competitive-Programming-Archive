import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public staic void rizz(int n)
    {
        int x=0;
        for(int i=0;i<n;i++)
        {
            x+=i;
        }
    }
    
	public static void main (String[] args) throws java.lang.Exception
  {
            Scanner sc = new Scanner(System.in);
        int riz=0;
        if(riz>99)
        {
            rizz(riz);
        }
        int tes=sc.nextInt();
        StringBuilder sb=new StringBuilder();
      lable:for(int fuck=1;fuck<=tes;fuck++)
      {
            int n=sc.nextInt(),i;
            if(n%3==0)
            {
                for(i=1;i<=n;i+=3)
                    System.out.print(i+" "+(i+2)+" "+(i+1)+" ");
                    System.out.println();
                    continue;
            }
            if(n%3==1)
            {
                for(i=1;i<=n-4;i+=3)
                    System.out.print(i+" "+(i+2)+" "+(i+1)+" ");
                System.out.print(n+" "+(n-1)+" "+(n-2)+" "+(n-3));
                System.out.println();
                continue;
            }
            System.out.print("4 5 2 1 3 ");
            for(i=6;i<=n;i+=3)
            System.out.print((i+2)+" "+(i+1)+" "+i+" ");
            System.out.println();
        }
        System.out.println(sb);
    }
    if(riz>99)
        {
            rizz(riz);
        }

}
