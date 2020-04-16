#include <stdio.h>
#include <string.h>

void freq_char(void);

void freq_char(void)
{
    int freq[26];       // freq为26个字母所组成的数组
    int k;
    memset(freq, 0, sizeof(int) * 26);
    char c, x = ' ';
    while ((c = getchar()) != EOF && c != '\n')/*这行代码的作用就是在输入流里面一直往后寻找，
                                                直到输入流里面出现换行符或者输入流结束(也就是EOF)才停止。*/
    {
        if (c == ' ' && x != ' ')/*这个循环体while里面的条件让没到每一行都循环一次，下面的c就是目前循环到的字符，
        如果遇到空格，就相当于遇到了单词的结尾，然后就把上一个字符
        ，也就是x所对应的在freq数组里面的那个数加1，以此达到统计的目的*/
            freq[x - 'a']++;
        x = c;
    }
    if (x != ' ')
        freq[x - 'a']++;
    /*到这里为止他的代码其实已经帮我们统计好了每个末尾字母的个数，
    freq里的0-25对应a到z的英文字母 */
    // your code - start
    for (int i1 = 150; i1 > 0; i1--)    /*这个150是我随便设的我想他说不超过300，但就算每个单词只有一个字母，
                                        每个字母都相同，最大的重复次数也不会超过150，不怎么严谨，但也比较简单，应该不会出错。*/
        for (int i2 = 0; i2 < 26; i2++) //相当于每一个频率都检查一遍有没有符合条件的字母，如果有就输出
        {
            if (freq[i2] == i1)
                printf("%c: %3d\n", i2 + 'a', freq[i2]); //i2+'a'把字母的序号转换成ascii里面字母对应的数，就可以以%c输出字母了
        }
    // your code - end
}

int main()
{
    freq_char();
    return 0;
}
