#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../models/models.h"

node *createNode(patient p) {
  node *temp = (node*)malloc(sizeof(node));
  strcpy(temp->p.name, p.name);
  temp->p.day = p.day;
  strcpy(temo->p.month, p.month);
  temp->p.year = p.year;
  temp->left = temp->right = NULL;
  return temp;
}


