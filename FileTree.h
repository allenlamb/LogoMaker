//
// Created by Allen Lam on 4/27/22.
//

#ifndef SFML_TEST_FILETREE_H
#define SFML_TEST_FILETREE_H
#include "GUIComponents.h"
#include "FileNode.h"

class FileTree : public GUIComponents {
private:
    FileNode* root = nullptr;
    void push(FileNode*& root, std::string parent, FileNode* item);
    void traverse(FileNode* &root, sf::RenderWindow& window, sf::Event event);
    void update(FileNode* &root);
public:
    FileTree();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void push(std::string parent, FileNode*item);
    void preOrder(FileNode* &root);
    std::string getFontName();
    //does nothing now
    void applySnapshot(const Snapshot& snapshot) override;

    //calls the traverse function to add the event handlers to each node
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);

    //does nothing now
    virtual void update();
    //does nothing now
    Snapshot getSnapshot() override;
    //does nothing now
    virtual sf::FloatRect getGlobalBounds();
};


#endif //SFML_TEST_FILETREE_H
