#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * right;
    struct node * left;
};

//Kök düğüm için bir metod oluşturalım.

struct node * kokdugumolustur(int veri){
    struct node * root;
    root=(struct node *)malloc(sizeof(struct node));//Kok düğümü oluşturup bellekte yer ayırma işlemini gerçekleştirmiş bulunmaktayız.
    root->data=veri;
    root->left=NULL;
    root->right=NULL;
    //Buradaki metod ile kök düğümü oluşturmuş oluyoruz.
    return root;
}

struct node * ElemanEkle(struct node * root,int veri){
    //Öncellikle bir if şartıyla,kök düğüm ana düğüm oluşmu diyr bir test edelim.
    if (root==NULL)//Root boş ise,daha önceden değer almamış ise.
    {
        kokdugumolustur(veri);//Kök düğüm oluşturmak için,yapmış olduğumuz metodumuzu boş olan yapımıza kök oluşturması için döndürüyoruz.
    }
    else
    {
        //Kök düğüm var ise yani daha önceden eleman eklenemiş ise
        //Bu yapı içerisinde gerekli process'leri gerçekleştiriyoruz.
        //Bu yapı içerisinde yinde bir karak mekanizması kullanmamzı gerekecektir.
        //Bu karar yapısı ise dışarıdan gelen değer root değerinden,küçükmüdür, yoksa  daha büyükmüdür.
        //Diye kontrol sağlıyoruz eğer kökten daha küşçük bir değer gönderilmişse,
        //Kök'ün solunda,eğer kökten daha büyük bir değer gönderilmişse,
        //Kök'ün sağına yazılması gerekecektir.
        if (veri>root->data)
        {
            root->right=ElemanEkle(root->right,veri);
            //Burada eğer farkettiyseniz recursive bir işlem yapıyorum.,
            //Bunun nedeni ise gerekli şart sağlandığı halde.
            //Bir aşağı inecek olan root yapsısı bir sonraki ekleme için hazır kouma getiriliyor.
        }
        else
        {
            root->left=ElemanEkle(root->left,veri);
        }
        return root;
        


    }
    

}
//Şimdi ise oluşturduğumuz ağaç yapısı üzerinde dolaşma işlemimizi gerçekleştirme işlemini yapalım.
//Nasıl dolaşıyorduk?
//Preorder,Postorder ve Inorder şeklinde dolaşma işlemini gerçekleştiriyorduk.
//

int main(){



    return 0;
}