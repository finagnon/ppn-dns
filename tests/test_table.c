#include "table.h"





int main()
{

        //-----------------------------------------------------test of hash-----------------------------------------------------------------------------------------------
        init_val();
     /*   printf("...%ld...", hash("maman3"));
        printf("...%ld...", hash("fofo"));
        printf("...%ld...", hash("dada"));
        printf("..%ld...", hash("cloclo12"));
        printf("...%ld...", hash("fohek1"));
        printf("....%ld...", hash("da"));
        printf("..%ld...", hash("clc12"));
        printf("...%ld...", hash("maman mali3"));
        printf("...%ld...", hash("fofo dja"));
        printf("...%ld...", hash("dada yi"));
        printf("...%ld...", hash("cloclo va"));
        printf("...%ld...", hash("maman"));
        printf("...%ld...", hash("foggdnfo"));
        printf("...%ld...", hash("dagagada"));
        //----------------------------------------------------end test of hash----------------------------------------------------------------------------------------------
*/
        //----------------------------------------------------test of insert a new machine----------------------------------------------------------------------------------

      /*  h_table jan = {"123.345.456.1", "mahine1"};
        h_table klen = {"123.345.16.1", "mahine123"};

        h_table jonas = {"123.45.46.1", "mahine4"};
        h_table dona = {"123.35.46.1", "mahine189"};

        h_table luc = {"123.3.56.1", "mahine6741"};
        h_table van = {"123.3.6.1", "mahine134"};
        h_table blan = {"3.35.6.1", "78machin"};
        h_table kankun = {"1.35.6.1", "ahine1"};
        h_table didier = {"13.5.56.1", "mahi34"};
*/
        h_set("123.345.456.1","mahine1");
        h_set("123.345.456.2","mahine2");
        h_set("123.345.456.3","mahine3");


       // h_set("123.345.16.4", "machine2");
       // h_set("123.45.46.7","machine3");
       // h_set(&jonas);
       // h_set(&luc);

        //---------------------------------------------------------end insert-------------------------------------------------------------------------------------------------

        //-----------------------------------------------------------------------test of the fonction get----------------------------------------------------------------------
       // key_val_delete("123.345.456.1");
        get_value("123.345.456.1");
        
        return 0;
}