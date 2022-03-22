#ifndef __TABLE_H__
#define __TABLE_H__
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
/*#include <sys/socket.h>
#include <netdb.h>
#include <sys/select.h>
#include <netinet/in.h>
*/
int TAILLE = 10;

typedef unsigned int long htable_t;
typedef  char*  hkey_t;
typedef char* val_t;

/*typedef struct tabT{
        int index;
        int t;
}tabTime;
*/

typedef struct htable{
        hkey_t key;
        val_t val;
      //  struct htable*next;

}h_table;

//int tabHeur[TAILLE];
int tabHeur1[10];
h_table table[10];
h_table tab1[10];
h_table tab2[10];
h_table tab3[10];
h_table tab4[10];
h_table tab5[10];
h_table tab6[10];
h_table tab7[10];
h_table tab8[10];
h_table tab9[10];
//h_table tab_val[10];

void init_val();//Initialisation of 
//int new_taille(int* taille); //augment the size when the table is plemty at 1/2
//h_table new_tab(h_table *old_tab);


int h_set(hkey_t key, val_t val);//add anew table

htable_t hash(hkey_t key);//creation of hash table, used implementation of python
int generate_indix(h_table *htabl, int TAILLE);
h_table key_val_delete(hkey_t key);//for delete the key with the value.
h_table get_value(hkey_t key);//get key and value


#endif//__TABLE_H__