//
// Generated by JTB 1.3.2
//

package jtb.syntaxtree;

// Grammar production:
// f0 -> Modifiers()
// f1 -> <IDENTIFIER>
// f2 -> [ Arguments() ]
// f3 -> [ ClassOrInterfaceBody(false) ]
public class EnumConstant implements Node {
   // This was added after running jtb to remove serializable warning.
   static final long serialVersionUID = 20150406L;

   private Node parent;
   public Modifiers f0;
   public NodeToken f1;
   public NodeOptional f2;
   public NodeOptional f3;

   public EnumConstant(Modifiers n0, NodeToken n1, NodeOptional n2, NodeOptional n3) {
      f0 = n0;
      if ( f0 != null ) f0.setParent(this);
      f1 = n1;
      if ( f1 != null ) f1.setParent(this);
      f2 = n2;
      if ( f2 != null ) f2.setParent(this);
      f3 = n3;
      if ( f3 != null ) f3.setParent(this);
   }

   public void accept(jtb.visitor.Visitor v) {
      v.visit(this);
   }
   public <R,A> R accept(jtb.visitor.GJVisitor<R,A> v, A argu) {
      return v.visit(this,argu);
   }
   public <R> R accept(jtb.visitor.GJNoArguVisitor<R> v) {
      return v.visit(this);
   }
   public <A> void accept(jtb.visitor.GJVoidVisitor<A> v, A argu) {
      v.visit(this,argu);
   }
   public void setParent(Node n) { parent = n; }
   public Node getParent()       { return parent; }
}

