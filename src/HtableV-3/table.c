/* This is the differente fonction tha we use to add or delete one machine or all   */

#include "table.h"
//#define TAILLE 10

//--------------------------inittalisation values------------------------------------------------------------------------------------------------
//h_table table[TAILLE];
void init_val() { // initilisation of values of ours table

  // h_table table[TAILLE]; // create of table struct

  for (int i = 0; i < TAILLE; i++) {
    table[i].key = NULL;
    tab1[i].key = NULL;
    tab2[i].key = NULL;
    tab3[i].key = NULL;
    tab4[i].key = NULL;
    tab5[i].key = NULL;
    tab6[i].key = NULL;
    tab7[i].key = NULL;
    tab8[i].key = NULL;
    tab9[i].key = NULL;
    table[i].val = NULL;
    tab1[i].val = NULL;
    tab2[i].val = NULL;
    tab3[i].val = NULL;
    tab4[i].val = NULL;
    tab5[i].val = NULL;
    tab6[i].val = NULL;
    tab7[i].val = NULL;
    tab8[i].val = NULL;
    tab9[i].val = NULL;

    //------------------------end initialisation-------------------------------------------------------------------------------------------------------
  }
}
          //-----------------------------------add a machine or server---------------------------------------------------------------------------------------

          int h_set(hkey_t key, val_t val) {
            htable_t h_indix = hash(key);
            int indix = 0;
            // htable_t h_indix_val = hash(val);
            assert(key != NULL);
            assert(val != NULL);

            //--------------about hash key----------------------------------------------------------

            // printf("\nThe key is : %s \n", htabl->key);
            h_indix = h_indix * 5 + 1; // linear generator congruence
            h_indix = h_indix ^ (TAILLE - 1);
            h_indix = h_indix & (TAILLE - 1);
            // printf("h_indix = %ld", h_indix);
            indix = h_indix % (TAILLE);
            // printf("\n Dans la fonction SET : indix = %d \n", indix);

            if (table[indix].key == NULL) {
              table[indix].key = key;
              table[indix].val = val;
            } else if (tab1[indix].key == NULL) {

              tab1[indix].key = key;
              tab1[indix].val = val;

            }

            else if (tab2[indix].key == NULL) {

              tab2[indix].key = key;
              tab2[indix].val = val;

            }

            else if (tab3[indix].key == NULL) {

              tab3[indix].key = key;
              tab3[indix].val = val;

            } else if (tab4[indix].key == NULL) {

              tab4[indix].key = key;
              tab4[indix].val = val;

            }

            else if (tab5[indix].key == NULL) {

              tab5[indix].key = key;
              tab5[indix].val = val;

            }

            else if (tab6[indix].key == NULL) {

              tab6[indix].key = key;
              tab6[indix].val = val;

            }

            else if (tab7[indix].key == NULL ) {

              tab7[indix].key = key;
              tab7[indix].val = val;

            }

            else if (tab8[indix].key == NULL) {

              tab8[indix].key = key;
              tab8[indix].val = val;

            }

            else if (tab9[indix].key == NULL ) {

              tab9[indix].key = key;
              tab9[indix].val = val;
            }

            // printf("\n %s : %s\n\n ", htabl->key, (char *)htabl->val);

}


htable_t hash(hkey_t key)
{ // creation of hash table, used implementation of python
        unsigned char *p = (unsigned char *)key;
        int long h = *p << 7;
        int long l = 0;
        while (*p)
        {

                h = (1000003 * h) ^ (*p);
                l++;
                p++;
        }

        h ^= l;

        if (h < 0)
                return abs(-h);

        else
                return h;
}

//--------------------------------------end add----------------------------------------------------------------------------------------------------------

//-----------------------------------------------------get value with key-------------------------------------------------------------------------------
h_table get_value(hkey_t key)
{
        htable_t h_indix = hash(key);
        int indix1 =0;
        h_indix = h_indix * 5 + 1;
        h_indix = h_indix ^(TAILLE - 1); // (sizeof(table) - 1);
        h_indix = h_indix & (TAILLE -1); //(sizeof(table) - 1);
      //  printf("Dant get : H_indix = %ld", h_indix);
        indix1 = h_indix % TAILLE; // sizeof(table));
      //  printf("\n Dans get : indix = %d \n", indix1);
        int subIndx1 = indix1;
      if(strcmp(key,table[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",table[indix1].key, table[indix1].val);

      }
      else if(strcmp(key, tab1[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",tab1[indix1].key, tab1[indix1].val);

      }
      else if(strcmp(key, tab2[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",tab2[indix1].key, tab2[indix1].val);

      }

      else if(strcmp(key, tab3[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",tab3[indix1].key, tab3[indix1].val);

      }

      else if(strcmp(key, tab4[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",tab4[indix1].key, tab4[indix1].val);

      }

      else if(strcmp(key, tab5[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",tab5[indix1].key, tab5[indix1].val);

      }
      else if(strcmp(key, tab6[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",tab6[indix1].key, tab6[indix1].val);

      }
      else if(strcmp(key, tab7[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",tab7[indix1].key, tab7[indix1].val);

      }

      else if(strcmp(key, tab8[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",tab8[indix1].key, tab8[indix1].val);

      }

      else if(strcmp(key, tab1[indix1].key)==0){
        printf("la cle et valeur :\n %s ============> %s\n",tab9[indix1].key, tab9[indix1].val);

      }





}

//-------------------------------------------delet key with value------------------------------------------------------------------------------------------
h_table key_val_delete(hkey_t key)
{
        h_table *table;
        htable_t h_indix = hash(key);
        h_indix = h_indix * 5 + 1;
        h_indix = h_indix ^ (TAILLE - 1);
        h_indix = h_indix & (TAILLE - 1);
        int indix = h_indix % TAILLE;

    if(strcmp(key,table[indix].key)==0){
        table[indix].key = NULL;
        table[indix].val = NULL;
    }
    else if(strcmp(key, tab1[indix].key)==0){
        tab1[indix].key = NULL;
        tab1[indix].val = NULL;
    }
    else if(strcmp(key, tab2[indix].key)==0){
        tab2[indix].key = NULL;
        tab2[indix].val = NULL;
    }

    else if(strcmp(key, tab3[indix].key)==0){
        tab3[indix].key = NULL;
        tab3[indix].val = NULL;
    }

    else if(strcmp(key, tab4[indix].key)==0){
        tab4[indix].key = NULL;
        tab4[indix].val = NULL;
    }

    else if(strcmp(key, tab5[indix].key)==0){
        tab5[indix].key = NULL;
        tab5[indix].val = NULL;
    }
    else if(strcmp(key, tab6[indix].key)==0){
        tab6[indix].key = NULL;
        tab6[indix].val = NULL;
    }
    else if(strcmp(key, tab7[indix].key)==0){
        tab7[indix].key = NULL;
        tab7[indix].val = NULL;
    }

    else if(strcmp(key, tab8[indix].key)==0){
        tab8[indix].key = NULL;
        tab8[indix].val = NULL;
    }

    else if(strcmp(key, tab9[indix].key)==0){
        tab9[indix].key = NULL;
        tab9[indix].val = NULL;

    }










}

//----------------------------------------------end delete---------------------------------------------------------------------------------------------------

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
        h_set("123.345.456.1","machine1");
        h_set("123.345.456.2","machine2");
        h_set("123.345.456.3","machine3");


       // h_set("123.345.16.4", "machine2");
       // h_set("123.45.46.7","machine3");
       // h_set(&jonas);
       // h_set(&luc);

        //---------------------------------------------------------end insert-------------------------------------------------------------------------------------------------

        //-----------------------------------------------------------------------test of the fonction get----------------------------------------------------------------------
       //key_val_delete("123.345.456.1");
        get_value("123.345.456.3");
        
        return 0;
}