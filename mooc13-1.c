    #include <stdio.h>
    #include <stdlib.h>
    #include <malloc.h>
    int varGlobal1 ;
    int varGlobal2 ;
    int varGlobal3 ;
    int varGlobal4 = 1;
    int varGlobal5 = 2;
    int varGlobal6 = 3;
    const int varGlobalCons1 = 4;
    const int varGlobalCons2 = 5;
    const int varGlobalCons3 = 6;
    static int varGlobalStat1 = 7;
    static int varGlobalStat2 = 8;
    static int varGlobalStat3 = 9;
    void funcTest(int param1, int param2, int param3)
    {
        int varLocal1 = 10;
        int varLocal2 = 11;
        int varLocal3 = 12;
        const int varLocalCons1 = 0;
        const int varLocalCons2 = 0;
        const int varLocalCons3 = 0;
        printf("�����ڱ�����ַ\n");
        printf("varLocal1 = %x, varLocal2 = %x, varLocal3 = %x\n",&varLocal1,&varLocal2,&varLocal3);
        printf("�����ڳ�����ַ\n");
        printf("varLocalCons1 = %x, varLocalCons2 = %x, varLocalCons3 = %x\n",&varLocalCons1,&varLocalCons2,&varLocalCons3);
        printf("����������ַ\n");
        printf("param1 = %x, param2 = %x, param3 = %x\n",&param1,&param2,&param3);
    }
    int main()
    {
        static int varLocalStat1 = 0;
        static int varLocalStat2 = 0;
        static int varLocalStat3 = 0;
        static int varLocalStat4 ;
        static int varLocalStat5 ;
        static int varLocalStat6 ;
        const int varLocalCons1 = 0;
        const int varLocalCons2 = 0;
        const int varLocalCons3 = 0;
        int varLocal1 = 0;
        int varLocal2 = 0;
        int varLocal3 = 0;
        char * pMalloc1, *pMalloc2, *pMalloc3;
        pMalloc1 = (char *)malloc(sizeof(char)*10);
        pMalloc2 = (char *)malloc(sizeof(char)*10);
        pMalloc3 = (char *)malloc(sizeof(char)*10);
        funcTest(varLocal1,varGlobal1,varGlobalCons1);
        printf("main()���ر�����ַ\n");
        printf("varLocal1 = %x, varLocal2 = %x, varLocal3 = %x\n",&varLocal1,&varLocal2,&varLocal3);
        printf("main()���س�����ַ\n");
        printf("varLocalCons1 = %x, varLocalCons2 = %x, varLocalCons3 = %x\n",&varLocalCons1,&varLocalCons2,&varLocalCons3);
        printf("ȫ�ֱ�����ַ����ʼ����\n");
        printf("varGlobal4 = %x, varGlobal5 = %x, varGlobal6 = %x\n",&varGlobal4,&varGlobal5,&varGlobal6);
        printf("ȫ�־�̬������ַ\n");
        printf("varGlobalStat1 = %x, varGlobalStat2 = %x, varGlobalStat3 = %x\n",&varGlobalStat1,&varGlobalStat2,&varGlobalStat3);
        printf("ȫ�ֳ�����ַ\n");
        printf("varGlobalCons1 = %x, varGlobalCons2 = %x, varGlobalCons3 = %x\n",&varGlobalCons1,&varGlobalCons2,&varGlobalCons3);
        printf("���ؾ�̬������ַ(�ѳ�ʼ��)\n");
        printf("varLocalStat1 = %x, varLocalStat2 = %x, varLocalStat3 = %x\n",&varLocalStat1,&varLocalStat2,&varLocalStat3);
        printf("���ؾ�̬������ַ(δ��ʼ��)\n");
        printf("varLocalStat4 = %x, varLocalStat5 = %x, varLocalStat6 = %x\n",&varLocalStat4,&varLocalStat5,&varLocalStat6);
        printf("ȫ�ֱ�����ַ��δ��ʼ����\n");
        printf("varGlobal1 = %x, varGlobal2 = %x, varGlobal3 = %x\n",&varGlobal1,&varGlobal2,&varGlobal3);
        printf("�ڶ��Ϸ�����ڴ��ַ\n");
        printf("pMalloc1 = %x, pMalloc2 = %x, pMalloc3 = %x\n",pMalloc1,pMalloc2,pMalloc3);
        free(pMalloc1);
        free(pMalloc2);
        free(pMalloc3);
        return 0;
    }