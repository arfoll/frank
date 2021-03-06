#include "ast/ast_node.h"

namespace fparser
{
namespace ast
{
ASTNode::ASTNode() {}
ASTNode::ASTNode(const ASTNode&) {}
ASTNode::ASTNode(ASTNode&&) {}
ASTNode::~ASTNode()
{
  for (std::size_t i = 0; i < children_.size(); ++i)
  {
    delete children_[i];
  }
}
void ASTNode::add_child(ASTNode::NodePtr_t child) { children_.push_back(child); }
std::vector<ASTNode::NodePtr_t>& ASTNode::children() { return children_; }
bool ASTNode::has_children() const { return children_.empty(); }
}  // namespace ast
}  // namespace fparser
