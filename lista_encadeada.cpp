#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

typedef struct Item Item;
typedef struct List List;

struct Item {
    int value;
    int pos;

    Item* next;
    Item* back;
};

struct List {
    int size = 0;
    Item* end;
};

void initialize(List* list) {
    list->size = 0;
    list->end = nullptr;
}

void insert(List* list, int value) {
    Item* item = new Item;

    item->value = value;
    item->pos = list->size;

    if (list->size == 0) {
        list->end = item;

        item->back = item;
        item->next = item;

        list->size++;

        return;
    }

    Item* aux = list->end;  // end

    list->end = item;

    item->next = aux->next;
    item->back = aux;

    aux->next = item;
    aux->back = item;

    list->size++;
}

void showList(List* list) {
    if (list->size == 0) {
        cout << "Empty list!" << endl;
        return;
    }

    Item* aux = list->end->next;

    int count = 0;

    while (aux != nullptr) {
        cout << aux->value << " ";
        aux = aux->next;

        count++;
        if (count == list->size) break;
    }

    cout << endl;
}

int main() {
    _;

    List* list = new List;

    initialize(list);

    int n;

    while (cin >> n)
    {
        insert(list, n);
        showList(list);
    }
    

    return 0;
}
