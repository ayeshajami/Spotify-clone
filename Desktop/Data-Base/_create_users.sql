create table posts (
    id int auto_increment primary key,
    content varchar(255) not null,
    user_id int,
    foreign key (user_id) references users(id)
);
