-- SELECT
-- p.firstName,
-- p.lastName,
-- p.city,
-- a.state
-- FROM person p
-- left join Address a
-- ON p.personId = a.personId;

SELECT
    p.firstName,
    p.lastName,
    a.city,
    a.state
FROM Person p
LEFT JOIN Address a
ON p.personId = a.personId;

