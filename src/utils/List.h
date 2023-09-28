//
// Created by caior on 26/09/2023.
//

#include <vector>
#include <stdexcept>

#ifndef BOMBERVALI_LIST_H
#define BOMBERVALI_LIST_H

using namespace std;

template <class T>
class List {
private:
    vector<T> elements;

public:
     /**
      * Adiciona um elemento na lista
      * @param element Elemento a ser adicionado
      */
    void add(T &element) {
        elements.push_back(element);
    }

    /**
     * Pega um elemento do indice informado, como por exemplo o
     * @param index Indice do elemento
     * @return
     */
    T get(int index) {
        if (index >= 0 && index < elements.size()) {
            return elements[index];
        } else {
            throw std::out_of_range("Cannot found this index inside List");
        }
    }

    /**
     * Método que retorna a quantidade de items na lista
     * @return Tamanho da lista
     */
    int size() {
        return elements.size();
    }

    /**
     * Método que limpa a lista
     */
    void clear() {
        elements.clear();
    }

    /**
     * Remove um elemento da lista pelo seu indice
     * @param index Indice do elemento a ser removido
     */
    void remove(int index) {
        if (index >= 0 && index < elements.size()) {
            elements.erase(elements.begin() + index);
        } else {
            throw std::out_of_range("Índice fora dos limites da lista");
        }
    }
};

#endif //BOMBERVALI_LIST_H
