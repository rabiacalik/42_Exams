str dup --> string duplicate --> dizi kopyalama <br>
char    *ft_strdup(char *src);

- str adında bir karakter dizisi alır
- 'str' dizisinin uzunluğunu ölçer
- 'dup' adında oluşturulan karakter dizisi
- bu diye yer ayırmak için str nin uzunluğu kullanılır 
- boş(\0) karakteri unutma
- ayırılan yere sırasıyla 'str' nin elemanları atanır
- sonra değer return edilir
- ayırılan yer de 'free' ile boşaltılır
