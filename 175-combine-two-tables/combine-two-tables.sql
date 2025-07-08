# Write your MySQL query statement below
Select person.firstName,person.lastName,address.city,address.state from person  left join address
ON person.personID=address.personID order by person.firstName;