# bug
目前 使用xml定义嵌套的序列，在xtype regisist的过程会发生崩溃！！  
https://github.com/eProsima/Fast-DDS/issues/3296

暂时使用以下方式规避
```C
    m_type.get()->auto_fill_type_information(false);
    m_type.get()->auto_fill_type_object(false);
```

