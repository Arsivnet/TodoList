# TodoList
A todoList program written in C language.

To compile: open a terminal in the directory where main.c is (Or go there with the terminal) and use the command below. You will need gcc for this. But you can use
other compilers as well.
```
gcc -o Todolist main.c
```
If you want to run this program by typing a different name other than "Todolist", just change that part in the commands above and below.
Example usage:
```
Todolist -Option
```
Where option is:
**-a** Add new task
**-l** Show the list
**-d** #NUMBER delete the #NUMBER line

Currently, it doesn't have any preventative measures for misusage (like typing a non-existent option or giving extra arguements) so it is prone to crashing. But this doesn't affect the file.
# Türkçe
C diliyle yazılmış basit bir Yapılacaklar Listesi uygulaması

Derlemek için: main.c dosyasını indirdiğiniz yerde bir Uçbirim Öyküncüsü açın (veya öyküncüden o dosya yoluna gidin) vee aşağıdaki komutu çalıştırın. Bunun için gcc
gerekli ancak başka derleyiciler de kullanabilirsiniz.
```
gcc -o liste main.c
```
programı öyküncüde "liste" dışında başka bir adla çağırmak isterseniz yukarıdaki ve aşağıdaki komutlardaki "liste" kısmını istediğiniz bir isimle değiştirebilirsiniz. Ancak dikkatli olun çünkü Türkçe karakter desteklemeyebilir.
Örnek kullanım:
```
liste -Seçenek
```
Seçenek şu değerler olabilir:
**-a** Yeni bir madde ekle
**-l** Listeyi göster
**-d #SAYI** listedeki #SAYI nolu maddeyi sil

Bu sürümde programın kodunda hata engelleyen herhangi bir kod bulunmamaktadır. Dolayısıyla yanlış seçenekler girmenizde (veya seçenek yerine sayı vb. girdi hataları yapma durumunda) program çökecektir ancak bu listenin olduğu dosyayı etkilememektedir.
