# Dynamische Speicherverwaltung

## Aufgabe
Implementiere die folgenden Funktionen:

```c
int* createArray(size_t size, int initial_value);
void resizeArray(int **array, size_t old_size, size_t new_size);
void freeArray(int **array);
```

## Tipps
- Prüfe malloc/realloc Rückgabewerte
- Immer free() nach malloc()
- Setze Pointer nach free() auf NULL
Download README.md