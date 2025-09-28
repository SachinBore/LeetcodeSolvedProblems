-- Write your PostgreSQL query statement below
select p.firstName as firstName, p.lastName as lastName, a.city, a.state from Person p left outer join Address a
on a.personId = p.personId
