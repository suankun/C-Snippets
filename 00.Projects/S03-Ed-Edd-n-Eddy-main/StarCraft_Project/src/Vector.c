#include <stdlib.h>

#include "Vector.h"
//Vector initialize

void vectorInit(Vector *vec, size_t initialCapacity) {
  vec->capacity = initialCapacity;
  vec->size = 0;
  vec->items = malloc(sizeof(void*) * vec->capacity);
}

//Getting Size Of Vector
size_t vectorGetSize(Vector *v) {
  return v->size;
}
//Check is Vector Empty
bool vectorIsEmpty(Vector *vec) {
  return vec->size == 0;
}
//Resizing Vector
void vectorResize(Vector *vec, size_t capacity) {
  void **items = realloc(vec->items, sizeof(void*) * capacity);
  if (items) {
    vec->items = items;
    vec->capacity = capacity;
  }
  if (vec->size >= capacity) {
    vec->size = capacity;
  }
}
//Pushing Vector item (a.k.a Ship)
void vectorPush(Vector *vec, void *item) {
  if (vec->capacity == vec->size) {
    vectorResize(vec, vec->capacity * 2);
  }
  vec->items[vec->size] = item;
  vec->size++;
}
//Setting Vector Item
void vectorSet(Vector *vec, size_t idx, void *item) {
  if (idx < vec->size) {
    vec->items[idx] = item;
  }
}
//Getting The Ships Type
void* vectorGet(Vector *vec, size_t idx) {
  if (idx < vec->size) {
    return vec->items[idx];
  }
  return NULL;
}

void* vectorBack(Vector *vec) {
  if (0 == vec->size) {
    return NULL;
  }

  return vec->items[vec->size - 1];
}
//Deleting a Item in vector
void vectorDelete(Vector *vec, size_t idx) {
  if (idx >= vec->size) {
    return;
  }

  vec->items[idx] = NULL;

  for (size_t i = idx; i < vec->size - 1; ++i) {
      vec->items[i] = vec->items[i + 1];
      vec->items[i + 1] = NULL;
  }

  vec->size--;
}
//
void vectorPop(Vector *vec) {
  if (vec->size == 0) {
    return;
  }

  vec->size--;
}
//Freeing a Vector
void vectorFree(Vector *vec) {
  if (vec->items != NULL) {
    free(vec->items);
    vec->items = NULL;
    vec->size = 0;
    vec->capacity = 0;
  }
}
