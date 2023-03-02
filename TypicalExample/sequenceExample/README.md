
对于动态长度的data_type定义，如包sequeue ， string等类型
write 不支持zero copy.  writer_->loan_sample(sample); 会返回失败


从测试看 不使用zero copy , 一次拷贝 32M数据约delay 2-3 ms