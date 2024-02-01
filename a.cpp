#include "dsa/node.h"
using namespace node;
int main(int argc, char const *argv[])
{
    Node* head = new Node(5);
    delete head;
    return 0;
}
